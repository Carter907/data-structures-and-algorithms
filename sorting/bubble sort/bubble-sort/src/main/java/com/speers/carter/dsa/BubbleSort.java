package com.speers.carter.dsa;

public class BubbleSort {

    public static void sort(int[] data) {

        boolean noComparison = false;
        for (int i = 0; i < data.length; i++) {
            noComparison = true;
            for (int j = 0; j < data.length-1; j++) {
                if (data[j] > data[j+1]) {
                    int temp = data[j];
                    data[j] = data[j+1];
                    data[j+1] = temp;
                    noComparison = false;
                }
            }
            if (noComparison) {
                break;
            }
        }
    }
}
