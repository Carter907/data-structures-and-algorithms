function moveZeros(nums: number[]): void {
    if (nums.length <= 1) 
        return;
    let pointer_a = 0;
    let pointer_b = 1;
    
    for (let a = 0, b = 1; b < nums.length; b++) {
        if (nums[a] != 0)
            a++;
        if (nums[b] != 0) {
            let temp = nums[a];
            nums[a] = nums[b];
            nums[b] = temp;
        }
    }
}