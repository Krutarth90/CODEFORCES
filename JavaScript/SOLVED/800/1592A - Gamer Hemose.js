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
    const n = +next(),
        h = +next();

    let largest = -Infinity;
    let secondLargest = -Infinity;

    for (let i = 0; i < n; i++) {
        const x = +next();

        if (x >= largest) {
            secondLargest = largest;
            largest = x;
        } else if (x > secondLargest) {
            secondLargest = x;
        }
    }
    if(largest >= h){
        console.log(1);
        return;
    }
    let ans = Math.floor(h / (largest + secondLargest)) * 2;
    if((h % (largest + secondLargest)) > largest)
        ans += 2;
    else if(h % (largest + secondLargest))
        ans ++;

    console.log(ans)
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
