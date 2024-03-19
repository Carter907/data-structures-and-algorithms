package com.speers.carter.dsa;

import java.util.Arrays;

public class MergeSort {

    public static void mergeSort(int[] data) {
        if (data.length <= 1) {
            return;
        }

        int[] data1 = new int[data.length / 2];
        System.arraycopy(data, 0, data1, 0, data1.length);
        mergeSort(data1);

        int[] data2 = new int[data.length - data.length / 2];
        System.arraycopy(data, data.length - data2.length, data2, 0, data2.length);
        mergeSort(data2);


        merge(data1, data2, data);
    }

    public static int[] merge(int[] left, int[] right, int[] temp) {

        int i = 0, j = 0, k = 0;
        while (i < left.length && j < right.length) {
            if (left[i] < right[j])
                temp[k++] = left[i++];
            else
                temp[k++] = right[j++];
        }

        while (j < right.length) {
            temp[k++] = right[j++];
        }

        while (i < left.length) {
            temp[k++] = left[i++];
        }
        return temp;
    }
}
