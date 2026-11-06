/* Maximum of an array: a component without state, with a single operation that changes
   nothing. The positions 0..NN come from the external context ctx. */
MACHINE
    max_array

SEES
    ctx

OPERATIONS

    /* The greatest value of the array given as input parameter. */
    maxi <-- getMaximum(array) =
    PRE
        array : (0..NN) --> INT
    THEN
        maxi := max(ran(array))
    END

END
