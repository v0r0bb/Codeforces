# CodeForces
Homework from the algorithmic cource ("Tower", BMSTU).

## [Interesting drink](https://github.com/v0r0bb/Codeforces/blob/main/InterestingDrink.c)
<details>
<summary>Show the task condition</summary>

Vasiliy likes to rest after a hard work, so you may often meet him in some bar nearby. As all programmers do, he loves the famous drink "Beecola", which can be bought in `n` different shops in the city. It's known that the price of one bottle in the shop `i` is equal to `x`<sub>`i`</sub> coins.

Vasiliy plans to buy his favorite drink for `q` consecutive days. He knows, that on the `i`-th day he will be able to spent `m`<sub>`i`</sub> coins. Now, for each of the days he want to know in how many different shops he can buy a bottle of "Beecola".

### Input

The first line contains single integer `n` (1 ≤ `n` ≤ 100,000) — number of shops.

The second line contains `n` integers `x`<sub>`i`</sub> (1 ≤ `x`<sub>`i`</sub> ≤ 100,000) — prices in i-th shop.

The third line contains single integer `q` (1 ≤ `q` ≤ 100,000) — number of days.

Then follow `q` lines with integers m<sub>i</sub> (1 ≤ `m`<sub>`i`</sub> ≤ 10<sup>9</sup>) — daily budget.

### Output

Print `q` integers where i-th number equals to number of shops where `x`<sub>`i`</sub> ≤ `m`<sub>`i`</sub>.

</details>