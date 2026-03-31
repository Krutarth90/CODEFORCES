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
    let s = next(),
        t = next();
    let h = +s.slice(0, 2) - +t.slice(0, 2),
        m = +s.slice(3, 5) - +t.slice(3, 5); 
    if(m < 0){
        h -= 1;
        m += 60;
    }
    if(h < 0)
        h += 24;
    h = String(h);
    m = String(m);
    while(h.length < 2)
        h = '0' + h;
    while(m.length < 2)
        m = '0' + m;
    console.log(`${h}:${m}`);  
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
