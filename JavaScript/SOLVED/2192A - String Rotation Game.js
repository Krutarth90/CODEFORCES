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

    let n = next();
    let s = next();
    let ans = 1;
    let f = false;
    for(let i = 1; i < n; i ++)
    {
        if(s[i] === s[i - 1])
            f = true;
        else
            ans ++;
    }
    if(f && s[0] != s[n - 1])
        ans ++;
    output.push(ans);
    console.log(output.join('\n'));
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
