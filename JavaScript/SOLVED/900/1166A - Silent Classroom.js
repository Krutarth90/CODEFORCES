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
        a = new Array(26),
        ans = 0;

    for(let i = 0; i < n; i ++)
    {
        let x = next();
        let char = x.charCodeAt(0) - 'a'.charCodeAt(0);
        if(a[char])
            a[char] ++;
        else
            a[char] = 1;
    }

    for(let i = 0; i < 26; i ++)
    {
        if(!a[i])
            continue;
        
        let flooredCount = Math.floor(a[i] / 2),
            plusable = Math.floor((flooredCount * (flooredCount - 1)) / 2);
        ans += plusable;

        if(a[i] % 2)
            plusable = Math.floor(((flooredCount + 1) * flooredCount) / 2);
        ans += plusable;
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
