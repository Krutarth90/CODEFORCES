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
        m = + next(),
        a = [], 
        ans = [],
        se = new Set();
    for(let i = 0; i < n; i ++){
        a.push(+next());
    }
    for(let i = n - 1; i > -1; i --){
        se.add(a[i]);
        ans[i] = se.size;
    }
    for(let i = 0; i < m; i ++){
        let x = +next();
        console.log(ans[x - 1]);
    }
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
