# The Pizza Game

> You are sitting with one of your friend. There is a pizza on the table with K, slices. Each time one of you take turns to pick 1 to 3 slices. The one who picks the last slice will be the winner. You will take the first turn to pick slice. You, both, are very clever and have optimal strategies for the game. Write a function to determine whether you can win the game given the number of slices in the pizza.

#### Input format:
K – Number of pizza slices.

#### Output Format:
Print ‘Win’ (without quotes) if you can win, else ‘Lose’(without quotes).

#### Constraints:
1 <= K <= 10<sup>18</sup>

#### Sample Input:
4

#### Sample Output:
Lose

#### Explanation:
If there are 4 slices, then you will never win the game; No matter 1, 2, or 3 slices you remove, the last slice will always be removed by your friend.