fn merge_sort(data: &mut [i64]) {
    if data.len() == 1 {
        return;
    }

    // sort first half
    let data_vec = Vec::from(data);

    data.copy_from_slice(&data[0..data.len()])

    // sort second half

    // merge sorted halves using merge fn
}

fn merge(left: &[i64], right: &[i64], temp: &mut [i64]) {
    let (mut curr1, mut curr2, mut curr3) = (0, 0, 0);

    while curr1 < left.len() && curr2 < right.len() {
        if left[curr1] < right[curr2] {
            temp[curr3] = left[curr1];
            curr1 += 1;
            curr3 += 1;
        } else {
            temp[curr3] = right[curr2];
            curr2 += 1;
            curr3 += 1;
        }
    }
    while curr1 < left.len() {
        temp[curr3] = left[curr1];
        curr3 += 1;
        curr1 += 1;
    }
    while curr2 < right.len() {
        temp[curr3] = right[curr2];
        curr2 += 1;
        curr3 += 1;
    }
}

#[cfg(test)]
mod test {
    use crate::merge;

    #[test]
    fn test_merging() {
        let mut left = [1, 6, 2, 3];
        let mut right = [3, 6, 1, 2];
        left.sort();
        right.sort();
        let mut temp: [i64; 8] = [0; 8];

        merge(&right, &left, &mut temp);

        println!("{:?}", temp);
    }

    #[test]
    fn test_sorting_algorithm() {}
}