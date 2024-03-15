package com.speers.carter.dsa;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        int[] nums = {1,2,7,1,2,9,3,5,8,2,1};

        BubbleSort.sort(nums);

        System.out.println(java.util.Arrays.toString(nums));

    }
}
