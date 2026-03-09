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
    let n = Number(next()),
        a = [],
        m = 0,
        i1 = -1,
        i2 = -1;
    
    for(let i = 1; i <= n; i ++)
    {
        let x = +next();
        m = (x > m) ? x : m;
        if(m === i && i1 === -1 && i < n)
            i1 = i;
        if(x === n)
            i2 = i;
        a.push(x);
    }
    if(i1 != -1)
    {
        let temp = a[i1 - 1];
        a[i1 - 1] = a[i2 - 1];
        a[i2 - 1] = temp;
    }
    console.log(a.join(' '));
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
