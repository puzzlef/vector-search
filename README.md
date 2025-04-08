Comparing approaches for **searching an element** in a *vector*.

<br>


### Comparing Linear vs Binary search

This experiment ([compare-linear-vs-binary]) was for finding when is **linear**
**search** faster than **binary search**. Both approaches were attempted on a no.
of *elements* ranging from `10` to `1000`. For each no. of elements a random
`int` list of that size was generated, and sorted. `5 million` random numbers
were searched in the list with each approach, and the total time taken was
measured.

**Binary search** is faster than **linear search** when the sorted list has
**atleast 120 elements**. Unfortunately, performing a **hybrid search** (linear
search for few elements, and binary search for many elements) does not help.
Maybe this is because of the added conditional switch? A *naive* implementation
of hybrid search also performs worse, indicating `std::lower_bound` has some
additional optimizations. Results for *hybrid search* are not included here.

[![](https://i.imgur.com/yqfNuN9.png)][sheets]

[compare-linear-vs-binary]: https://github.com/puzzlef/search/tree/compare-linear-vs-binary

<br>
<br>


[![](https://i.imgur.com/4DnzoYb.jpg)](https://www.youtube.com/watch?v=SjIliNbBDuQ)
[![ORG](https://img.shields.io/badge/org-puzzlef-green?logo=Org)](https://puzzlef.github.io)
[![DOI](https://zenodo.org/badge/378992466.svg)](https://zenodo.org/badge/latestdoi/378992466)
![](https://ga-beacon.deno.dev/G-KD28SG54JQ:hbAybl6nQFOtmVxW4if3xw/github.com/puzzlef/vector-search)

[charts]: https://photos.app.goo.gl/1YgKDCmtBY1Fp244A
[sheets]: https://docs.google.com/spreadsheets/d/1jhwk2JLRFZUGhxv_hZrpAdP3UPxqpNfH1Rmg-MPGdmc/edit?usp=sharing
