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
        k = + next(),
        ans = [],
        a = new Map(),
        set = new Set();
    for(let i = 0; i < k; i ++){
        +next();
    }
    for(let i = 1; i <= n; i ++){
        let x = + next();
        let arr = a.get(x) ?? [];
        arr.push(i);
        a.set(x, arr);
        set.add(x);
    }
    set = [...set].sort((a, b) => b - a);
    for(let key of set){
        let val = a.get(key);
        for(let index of val){
            for(let i = key; i <= k; i ++){
                ans.push(index);
            }
        }
    }
    console.log(ans.length);
    console.log(...ans);
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
