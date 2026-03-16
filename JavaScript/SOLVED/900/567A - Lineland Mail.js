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
        prev = -Infinity, 
        ma = -Infinity,
        mi = +Infinity;
    let arr = [];
    for(let i = 0; i < n; i ++)
    {
        let x = + next();
        if(i == n - 1)
        {
            let [prevCalc, prevEle] = arr[arr.length - 1];
            prevCalc = Math.min(prevCalc, x - prevEle);
            arr[arr.length - 1] = [prevCalc, prevEle];
            arr.push([x - arr[n - 2][1], x]);
        } 
        else
        {
            if(arr.length == 1)
            {
                arr[0][0] = x - prev;
            }
            else if(arr.length)
            {
                let [prevCalc, prevEle] = arr[arr.length - 1];
                prevCalc = Math.min(prevCalc, x - prevEle);
                arr[arr.length - 1] = [prevCalc, prevEle];
            }     
        }
        arr.push([(x - prev), x]);
        prev = x;
        ma = Math.max(ma, x);
        mi = Math.min(mi, x);
    }
    for(let i = 0; i < n; i ++)
    {
        arr[i] = [arr[i][0], Math.max(arr[i][1] - mi, ma - arr[i][1])];
        console.log(arr[i].join(' '));
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
