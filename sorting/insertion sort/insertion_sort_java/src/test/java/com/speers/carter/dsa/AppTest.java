package com.speers.carter.dsa;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertArrayEquals;

/**
 * Unit test for simple App.
 */
public class AppTest {
    /**
     * Rigorous Test :-)
     */
    @Test
    public void testInsertionSortSwap() {
        int[] pair = { 2, 1 };
        int[] pair2 = { 2, 1 };
        InsertionSort.sort(pair);
        java.util.Arrays.sort(pair2);

        assertArrayEquals(pair, pair2);
    }

    @Test
    public void testInsertionSort() {
        for (int i = 0; i < 100; i++) {
            int[] data = java.util.concurrent.ThreadLocalRandom.current().ints(20).toArray();
            int[] data2 = java.util.Arrays.copyOf(data, data.length);
            InsertionSort.sort(data);
            java.util.Arrays.sort(data2);

            assertArrayEquals(data, data2);
        }
    }
}
