package com.speers.carter.dsa;

public class InsertionSort {

    public static void sort(int[] data) {
        for (int i = 1; i < data.length; i++) {
            int numToInsert = data[i];
            for (int j = 0; j < i; j++) {
                if (data[j] > numToInsert) {
                    // data[j] becomes numToInsert and data[j] is assigned to numToInsert
                    int temp = data[j];
                    data[j] = numToInsert;
                    numToInsert = temp;
                    
                }
            }
            data[i] = numToInsert;
        }
    }
}
