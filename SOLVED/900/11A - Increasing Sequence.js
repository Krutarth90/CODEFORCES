const fs = require("fs");
let input = fs.readFileSync(0, "utf-8").trim().split("\n");
let n = parseInt(input[0].split(' ')[0]), d = parseInt(input[0].split(' ')[1]);
let a = input[1].split(" ").map(Number);
solve(n, d, a);

function solve (n, d, a)
{
    let ans = 0;
    for(let i = 1; i < n; i ++)
    {
        if(a[i] > a[i - 1])
            continue;
        let temp = Math.floor((a[i - 1] - a[i] + 1) / d) + (((a[i - 1] - a[i] + 1) % d) > 0);
        ans += temp;
        a[i] += temp * d;
    }
    console.log(ans);
}

