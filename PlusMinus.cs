using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{

    /*
     * Complete the 'plusMinus' function below.
     *
     * The function accepts INTEGER_ARRAY arr as parameter.
     */

    public static void plusMinus(List<int> arr)
    {
        var positiveCount =0;
        var negativeCount =0;
        var zeroCount = 0;
        for (var i = 0; i < arr.Count(); i++)
    {

        if(arr[i] > 0)
        {
        positiveCount++;
        }
        else if(arr[i] < 0)
        {
        negativeCount ++;
        }
        else
        {
        zeroCount++;
}
}

Console.WriteLine(((double)positiveCount/arr.Count()).ToString("0.000000"));

Console.WriteLine(((double)negativeCount/arr.Count()).ToString("0.000000"));

Console.WriteLine(((double)zeroCount/arr.Count()).ToString("0.000000"));

    }

}

class Solution
{
    public static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> arr = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList();

        Result.plusMinus(arr);
    }
}
