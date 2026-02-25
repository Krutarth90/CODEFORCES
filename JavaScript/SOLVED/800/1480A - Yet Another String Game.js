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

    let temp = next();
    let s = temp.split('')
    for(let i = 0; i < s.length; i ++)
    {
        if(i % 2)
            if(s[i] == 'z')
                s[i] = 'y';
            else
                s[i] = 'z'
        else
            if(s[i] == 'a')
                s[i] = 'b';
            else
                s[i] = 'a';
    }
    s = s.join('');
    output.push(s);
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
