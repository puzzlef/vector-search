Comparing when is **linear search** faster than **binary search**.

Both approaches were attempted on a no. of *elements* ranging from `10` to
`1000`. For each no. of elements a random `int` list of that size was
generated, and sorted. `5 million` random numbers were searched in the list
with each approach, and the total time taken was measured. **Binary search**
is faster than **linear search** when the sorted list has **atleast 120 elements**.
Unfortunately, performing a **hybrid search** (linear search for few elements,
and binary search for many elements) does not help. Maybe this is because of
the added conditional switch? A *naive* implementation of hybrid search also
performs worse, indicating `std::lower_bound` has some additional optimizations.
Results for *hybrid search* are not included here.

All outputs are saved in [out](out/) and a small part of the output is listed
here. Some [charts] are also included below, generated from [sheets].

<br>

```bash
$ g++ -O3 main.cxx
$ ./a.out

# {10 elems.} [00054.762 ms; 0 err.] linearSearch
# {10 elems.} [00088.012 ms; 0 err.] binarySearch
# {20 elems.} [00071.658 ms; 0 err.] linearSearch
# {20 elems.} [00098.357 ms; 0 err.] binarySearch
# {30 elems.} [00074.683 ms; 0 err.] linearSearch
# {30 elems.} [00100.936 ms; 0 err.] binarySearch
# {40 elems.} [00086.691 ms; 0 err.] linearSearch
# {40 elems.} [00116.274 ms; 0 err.] binarySearch
# {50 elems.} [00104.536 ms; 0 err.] linearSearch
# {50 elems.} [00126.724 ms; 0 err.] binarySearch
# ...
```

[![](https://i.imgur.com/yqfNuN9.png)][sheets]

<br>
<br>

[![](https://i.imgur.com/4DnzoYb.jpg)](https://www.youtube.com/watch?v=SjIliNbBDuQ)

[charts]: https://photos.app.goo.gl/1YgKDCmtBY1Fp244A
[sheets]: https://docs.google.com/spreadsheets/d/1jhwk2JLRFZUGhxv_hZrpAdP3UPxqpNfH1Rmg-MPGdmc/edit?usp=sharing
