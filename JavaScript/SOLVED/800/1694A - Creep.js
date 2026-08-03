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
    let z = + next(),
        o = + next(),
        ans = "",
        t = z + o;
    for(let i = 0; i < t; i ++){
        if(z && i % 2){
            ans += '0';
            z --;
            continue;
        }
        if(o && i % 2 == 0){
            ans += '1';
            o --;
            continue;
        }
        if(z){
            ans += '0';
            z --;
            continue;
        }
        if(o){
            ans += '1';
            o --;
            continue;
        }
    }
    console.log(ans);
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
