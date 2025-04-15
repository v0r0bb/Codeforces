# Codeforces
![Codeforces](https://img.shields.io/badge/Codeforces-1F8ACB?style=for-the-badge&logo=codeforces&logoColor=white)
![GNU](https://img.shields.io/badge/GNU_11.5.1-1F8ACB?style=for-the-badge&logo=gnu&logoColor=white&labelColor=555555)

Homework from the algorithmic cource ("Tower", BMSTU).

## [Interesting drink](https://github.com/v0r0bb/Codeforces/blob/main/InterestingDrink.c)
<details>
<summary>Show the task condition</summary>

Vasiliy likes to rest after a hard work, so you may often meet him in some bar nearby. As all programmers do, he loves the famous drink "Beecola", which can be bought in `n` different shops in the city. It's known that the price of one bottle in the shop `i` is equal to `x`<sub>`i`</sub> coins.

Vasiliy plans to buy his favorite drink for `q` consecutive days. He knows, that on the `i`-th day he will be able to spent `m`<sub>`i`</sub> coins. Now, for each of the days he want to know in how many different shops he can buy a bottle of "Beecola".

### Input

The first line contains single integer `n` (1 ≤ `n` ≤ 100,000) — number of shops.

The second line contains `n` integers `x`<sub>`i`</sub> (1 ≤ `x`<sub>`i`</sub> ≤ 100,000) — prices in `i`-th shop.

The third line contains single integer `q` (1 ≤ `q` ≤ 100,000) — number of days.

Then follow `q` lines with integers m<sub>i</sub> (1 ≤ `m`<sub>`i`</sub> ≤ 10<sup>9</sup>) — daily budget.

### Output

Print `q` integers where `i`-th number equals to number of shops where `x`<sub>`i`</sub> ≤ `m`<sub>`i`</sub>.

</details>

## [Final Boss](https://github.com/v0r0bb/Codeforces/blob/main/FinalBoss.c)
<details>
<summary>Show the task condition</summary>

You are facing the final boss in your favorite video game. The boss enemy has `h` health. Your character has `n` attacks. The `i`'th attack deals `a`<sub>`i`</sub> damage to the boss but has a cooldown of `c`<sub>`i`</sub> turns, meaning the next time you can use this attack is turn x+ci if your current turn is `x`. Each turn, you can use all attacks that are not currently on cooldown, ***all at once***. If all attacks are on cooldown, you do nothing for the turn and skip to the next turn.

Initially, all attacks are not on cooldown. How many turns will you take to beat the boss? The boss is beaten when its health is ***0*** or less.

### Input

The first line contains `t`
(1≤`t`≤10<sup>4</sup>)  – the number of test cases.

The first line of each test case contains two integers `h` and `n` (1≤`h`,`n`≤2⋅10<sup>5</sup>) – the health of the boss and the number of attacks you have.

The following line of each test case contains `n` integers `a`<sub>`1`</sub>,`a`<sub>`2`</sub>,...,`a`<sub>`n`</sub>  (1≤`a`<sub>`i`</sub>≤2⋅10<sup>5</sup>) – the damage of your attacks.

The following line of each test case contains `n` integers `c`<sub>`1`</sub>,`c`<sub>`2`</sub>,...,`c`<sub>`n`</sub>  (1≤`c`<sub>`i`</sub>≤2⋅10<sup>5</sup>) – the cooldown of your attacks.

It is guaranteed that the sum of `h`
and `n` over all test cases does not exceed 2⋅10<sup>5</sup>.

### Output

For each test case, output an integer, the minimum number of turns required to beat the boss.

</details>

## [New Year Transportation](https://github.com/v0r0bb/Codeforces/blob/main/Transportation.c)