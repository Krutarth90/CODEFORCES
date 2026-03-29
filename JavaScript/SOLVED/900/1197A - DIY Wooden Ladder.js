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
    let n = +next(), 
        m1 = 0,
        m2 = 0;
    for(let i = 0; i < n; i ++){
        let x = +next();
        if(x >= m1){
            m2 = m1;
            m1 = x;
        }
        else if(x > m2){
            m2 = x;
        }
    }
    console.log(Math.min(m2 - 1, n - 2));
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
