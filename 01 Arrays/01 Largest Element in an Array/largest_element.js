let nums = [59,82,76,56,29]
let max = nums[0]

for(let num of nums){
    if(max < num){
        max = num
    }
}

console.log(`The max number is: ${max}`)