
fn insertion_sort(data: &mut [i32]) {
    for i in 1..data.len() {
        let mut curr = data[i];
        for j in 0..i {
            if curr < data[j] {
                let temp = data[j];
                data[j] = curr;
                curr = temp;

            }
        }
        data[i] = curr;
    }
}

#[cfg(test)]
mod tests {
    use crate::insertion_sort;

    #[test]
    fn test_insertion_sort() {
        let mut array1 = [1,9,2,5,6,3,7,4];
        let mut array2 = [1,9,2,5,6,3,7,4];

        array1.sort();
        insertion_sort(&mut array2);

        assert_eq!(array1, array2);
    }
}
