package com.speers.carter.dsa;

import org.junit.jupiter.api.Test;

import java.util.Arrays;

import static org.junit.jupiter.api.Assertions.assertArrayEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * Unit test for simple App.
 */
public class AppTest 
{
    /**
     * Rigorous Test :-)
     */
    @Test
    public void shouldAnswerWithTrue() {
        int[] testArr = {1,2,7,2,3,8,1,23};
        int[] testArr1 = {1,2,7,2,3,8,1,23};
        Arrays.sort(testArr);
        MergeSort.mergeSort(testArr1);
        assertArrayEquals(testArr1, testArr);
    }
}
