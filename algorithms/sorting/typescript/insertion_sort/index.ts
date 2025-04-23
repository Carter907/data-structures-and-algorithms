function sort(data: number[]) {
    
    for (let i = 1; i < data.length; i++) {
        let curr = data[i];
        for (let j = 0; j < i; j++) {
            if (curr < data[j]) {
                let temp = data[j];
                data[j] = curr;
                curr = temp;
            }
        }
        data[i] = curr;
    }
}

const nums = [1,7,2,6,8,5,3]
sort(nums)
console.log(nums)