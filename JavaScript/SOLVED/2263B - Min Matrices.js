'use strict';

const fs = require('fs');
const input = fs.readFileSync(0, 'utf-8').trim().split(/\s+/);

let idx = 0;
const next = () => input[idx++];

// ---------- UTILS ----------


function gcd(a, b) {
    while (b !== 0) {
        [a, b] = [b, a % b];
    }
    return Math.abs(a);
}

const mod = (x) => x % 998244353;

const lcm = (a, b) => Math.abs(a * b) / gcd(a, b);

// ---------- SOLVE ----------

function solve() {
    let n = + next(),
        k = + next();
    if(k < n || k == 2 * n){
        return console.log(-1);
    }
    let firstRow = k - n + 1, cur = n + 1;

    for(let i = 1; i <= n; i ++){
        const arr = [];
        for(let j = 1; j <= n; j ++){

            if(i == 1 && j <= firstRow){
                arr.push(j);
                continue;
            }
            if(i == j && i == firstRow + 1){
                arr.push(++ firstRow);
                continue;
            }
            arr.push(cur ++);
        }
        console.log(...arr);
    }
}

// ---------- MAIN ----------

function main() {

    let TC = 1;
    TC = Number(next());

    while (TC--) {
        solve();
    }

}

main();
