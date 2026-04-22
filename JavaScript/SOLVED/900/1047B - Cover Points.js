'use strict';

const fs = require('fs');
const input = fs.readFileSync(0, 'utf-8').trim().split(/\s+/);

let idx = 0;
function next() {
    return input[idx++];
}

// ---------- UTILS ----------

// mod function
function mod(x) {
    return x % 998244353;
}

// YES / NO helpers
function YES(output) {
    output.push("YES");
}

function NO(output) {
    output.push("NO");
}

// ---------- SOLVE ----------

function solve() {
    let n = + next(),
        ans = 0;
    while(n --){
        let x = +next() + +next();
        ans = Math.max(ans, x);
    }
    console.log(ans);
}

// ---------- MAIN ----------

function main() {

    let TC = 1;
    // TC = Number(next()); 

    while (TC--) {
        solve();
    }
  
}

main();
