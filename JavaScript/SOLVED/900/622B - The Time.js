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
    let time = next(),
        hours = +next();
    hours = hours % (24 * 60);
    let hrs = +time.slice(0, 2),
        mins = +time.slice(3);
    hrs += Math.floor(hours / 60);
    mins += hours % 60;
    if(mins >= 60) {
        hrs ++;
        mins %= 60;
    }
    hrs = hrs % 24;
    if(hrs < 10)
        hrs = '0' + hrs;
    if(mins < 10)
        mins = '0' + mins;
    
    console.log(`${hrs}:${mins}`);
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
