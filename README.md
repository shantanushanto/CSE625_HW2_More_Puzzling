# More puzzling

### Description
9 tiles are marked with 1 to 9;

### Observation

There are some observation that can be used to prune away the search space

- While putting blocks if a blank space is found where there is no hole and there is no block that can be fitted then we can roll back from that combination. Because there will be no
solution.
- Instead of putting the block in all possible place in the board we can try all possible tiles of a cube to fit in a particular block. That way instead of trying for 7*7 place we can only
try max number of tiles of a block (Min: 2 ,Max: 7).
- Instead of a static block representation we can convert the block into graphs. Each tile from a block will tell which next position will be occupied on the board.

<details><summary>Task 1 Solution</summary>
<p>
```
For Hole: H1(0,3):
1 6 6 # 5 5 5
1 4 6 6 5 5 3
4 4 4 6 5 2 3
4 4 4 7 2 2 3
4 8 7 7 2 2 3
8 8 8 7 9 2 3
8 8 8 9 9 9 9

For Hole: H2(1,0):
1 1 3 3 3 3 3
# 4 4 6 5 5 5
4 4 4 6 6 5 5
2 4 4 4 6 6 5
2 2 7 7 7 8 8
2 2 9 7 8 8 8
2 9 9 9 9 8 8

For Hole: H3(1,4):
1 3 3 3 3 3 2
1 4 4 6 # 2 2
4 4 4 6 6 2 2
9 4 4 4 6 6 2
9 9 8 7 7 7 5
9 8 8 8 7 5 5
9 8 8 8 5 5 5

For Hole: H4(1,5):
1 5 5 5 6 6 9
1 5 5 6 6 # 9
3 5 4 6 7 9 9
3 4 4 4 7 7 9
3 4 4 4 7 8 8
3 4 2 2 8 8 8
3 2 2 2 2 8 8

For Hole: H5(3,2):
1 8 8 9 9 9 9
1 8 8 8 4 9 3
2 8 8 4 4 4 3
2 2 # 4 4 4 3
2 2 5 4 6 6 3
2 5 5 6 6 7 3
5 5 5 6 7 7 7

For Hole: H6(3,3):
1 3 3 3 3 3 6
1 9 9 9 9 6 6
8 8 8 9 6 6 2
8 8 8 # 4 2 2
5 8 4 4 4 2 2
5 5 4 4 4 7 2
5 5 5 4 7 7 7

For Hole: H7(4,1):
1 5 5 5 7 7 7
1 5 5 6 6 7 3
9 5 8 8 6 6 3
9 9 8 8 8 6 3
9 # 8 8 4 4 3
9 2 2 4 4 4 3
2 2 2 2 4 4 4

For Hole: H8(4,4):
1 2 2 2 2 6 6
1 4 2 2 6 6 5
4 4 4 9 6 5 5
4 4 4 9 5 5 5
4 7 9 9 # 8 8
7 7 7 9 8 8 8
3 3 3 3 3 8 8

For Hole: H9(4,6):
1 3 3 3 3 3 9
1 4 2 2 2 2 9
4 4 4 2 2 9 9
4 4 4 5 5 5 9
4 6 6 5 5 8 #
6 6 7 5 8 8 8
6 7 7 7 8 8 8

For Hole: H10(5,3):
1 3 3 3 3 3 4
1 8 8 8 4 4 4
2 8 8 8 4 4 4
2 2 8 6 6 4 7
2 2 6 6 5 7 7
2 9 6 # 5 5 7
9 9 9 9 5 5 5

For Hole: H11(6,0):
1 2 2 2 2 6 6
1 9 2 2 6 6 3
9 9 9 9 6 4 3
5 5 5 4 4 4 3
5 5 8 4 4 4 3
5 8 8 8 4 7 3
# 8 8 8 7 7 7

For Hole: H12(6,4):
1 3 3 3 3 3 9
1 4 2 2 2 2 9
4 4 4 2 2 9 9
4 4 4 5 5 5 9
4 6 6 5 5 8 8
6 6 7 5 8 8 8
6 7 7 7 # 8 8

For Hole: H13(6,5):
1 3 3 3 3 3 5
1 4 7 7 7 5 5
4 4 4 7 5 5 5
4 4 4 8 8 8 9
4 6 6 8 8 8 9
6 6 2 2 8 9 9
6 2 2 2 2 # 9
```
</p>
</details>

<details><summary>Task 2 Solution</summary>
<p>
```
Total Solution for Hole: H1(0,3): 38
Total Solution for Hole: H2(1,0): 92
Total Solution for Hole: H3(1,4): 45
Total Solution for Hole: H4(1,5): 26
Total Solution for Hole: H5(3,2): 50
Total Solution for Hole: H6(3,3): 12
Total Solution for Hole: H7(4,1): 43
Total Solution for Hole: H8(4,4): 37
Total Solution for Hole: H9(4,6): 18
Total Solution for Hole: H10(5,3): 70
Total Solution for Hole: H11(6,0): 181
Total Solution for Hole: H12(6,4): 17
Total Solution for Hole: H13(6,5): 67
```
</p>
</details>

<details><summary>Task 3 Solution</summary>
<p>
```
All cells can contain holes with a puzzle
```
</p>
</details>