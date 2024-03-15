package com.speers.carter.dsa;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args ) {

        int[] left = {1,2,3};
        int[] right = {5,6,9,12};
        int[] temp = new int[7];
        int[] merged = MergeSort.merge(left, right, temp);

        System.out.println(java.util.Arrays.toString(merged));
    }
}
