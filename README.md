![Image alt](https://github.com/nuchyobitva/sem3_lab3/blob/master/grafik.png)


investigation:
  travel_variant: direction forward
  experiments:
  - experiment:
      number:1
      input_data:
        buffer_size: 1Mb
      results:
        duration: 7 ms
  - experiment:
      number: 2
      input_data:
        buffer_size: 2Mb
      results:
        duration:  15 ms
  - experiment:
       number: 3
       input_data:
        buffer_size: 4Mb
       results:
        duration:  31 ms
  - experiment:
        number: 4
        input_data:
         buffer_size: 8Mb
        results:
          duration:  165 ms
  - experiment:
        number: 5
        input_data:
         buffer_size: 12Mb
        results:
          duration:  195 ms


 investigation:
   travel_variant: direction revers
   experiments:
  - experiment:
    number:1
    input_data:
    buffer_size: 1Mb
       results:
      duration: 5 ms
  - experiment:
    number: 2
    input_data:
    buffer_size: 2Mb
       results:
      duration:  12 ms
  - experiment:
    number: 3
    input_data:
    buffer_size: 4Mb
       results:
      duration:  74 ms
  - experiment:
    number: 4
    input_data:
    buffer_size: 8Mb
       results:
      duration:  107 ms
  - experiment:
    number: 5
    input_data:
    buffer_size: 12Mb
       results:
      duration:  128 ms


investigation:
 travel_variant: random
experiments:
- experiment:
  number:1
  input_data:
  buffer_size: 1Mb
     results:
    duration: 86 ms
- experiment:
  number: 2
  input_data:
  buffer_size: 2Mb
     results:
    duration:  296 ms
- experiment:
  number: 3
  input_data:
  buffer_size: 4Mb
     results:
    duration:  1134 ms
- experiment:
  number: 4
  input_data:
  buffer_size: 8Mb
      results:
     duration:  2088 ms
- experiment:
  number: 5
  input_data:
  buffer_size: 12Mb
     results:
    duration:  3597 ms
