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
    let f = 1;
    let n = Number(next());
    let a = [];
    let mx = -1, z = 0;
    for(let i = 0; i < n; i ++)
    {
        let x = Number(next());
        a.push(x);
    }
    if(n === 1)
    {
        let x = Number(next());
        if(x <= a[0])
        {
            console.log("YES");
            return;
        }
        else
        {
            console.log("NO");
            return;
        }
    }
    for(let i = 0; i < n; i ++)
    {
        let x = Number(next());
        if(x > a[i])
            f = 0;
        let diff = a[i] - x;
        if(x == 0)
        {
            z = Math.max(z, diff);
            continue;
        }
        if(mx === -1)
        {
            mx = diff;
            continue;
        }
        if(diff === mx)
            continue;
        if(x === 0 && diff < mx)
            continue;
        f = 0;
    }
    if(f && (z <= mx || mx == -1))
        console.log("YES");
    else
        console.log("NO");
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
