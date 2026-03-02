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
    let output = [];
    let n = Number(next()), a = 101, b = 101;
    for(let i = 0; i < n; i ++)
    {
        let x = Number(next());
        if(x < a)
        {
            b = a;
            a = x;
        }
        else if(x !== a && x < b)
            b = x;
    }
    if(b === 101)
        console.log("NO");
    else
        console.log(b);
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
