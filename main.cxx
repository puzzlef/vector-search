#include <cmath>
#include <random>
#include <vector>
#include <algorithm>
#include "src/main.hxx"

using namespace std;




void runExpt(int N, int repeat) {
  vector<int> x(N);
  vector<int> vs(repeat);
  int M = int(sqrt(N));
  random_device dev;
  default_random_engine rnd(dev());
  uniform_int_distribution<> dis(0, M);

  // Generate sorted random numbers.
  for (int i=0; i<N; i++)
    x[i] = dis(rnd);
  sort(x.begin(), x.end());

  // Generate search values.
  for (int i=0; i<repeat; i++)
    vs[i] = dis(rnd);

  // Perform linear search.
  int i1 = 0, i2 = 0;
  float t1 = measureDuration([&] {
    for (int i=0; i<repeat; i++)
      i1 += findEqIndex(x, vs[i]);
  });
  printf("{%d elems.} [%09.3f ms; %d err.] linearSearch\n", N, t1, abs(i1-i1));

  // Perform binary search.
  float t2 = measureDuration([&] {
    for (int i=0; i<repeat; i++)
      i2 += lowerBoundEqIndex(x, vs[i]);
  });
  printf("{%d elems.} [%09.3f ms; %d err.] binarySearch\n", N, t2, abs(i2-i1));

  // Perform hybrid search.
  // for (int B=1; B<256; B*=2) {
  //   int i3 = 0;
  //   float t2 = measureDuration([&] {
  //     for (int i=0; i<repeat; i++)
  //       i3 += searchHybrid(x, vs[i], B);
  //   });
  //   printf("{%d elems.} [%09.3f ms; %d err.] hybridSearch (block=%d)\n", N, t2, abs(i3-i1), B);
  // }
}




int main(int argc, char **argv) {
  int repeat = argc>1? stoi(argv[1]) : 5000000;
  for (int N=10; N<=1000; N+=10)
    runExpt(N, repeat);
  printf("\n");
  return 0;
}
