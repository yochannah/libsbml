function testBinding

if (strcmp(isoctave(), '0'))
  test = 14;
else
  test = 13;
end;
Totalfail = 0;

Totalfail = Totalfail + testReadFromFile1;
Totalfail = Totalfail + testReadFromFile2;
Totalfail = Totalfail + testReadFromFile3;
Totalfail = Totalfail + testReadFromFile4;
Totalfail = Totalfail + testReadFromFile5;
Totalfail = Totalfail + testReadFromFile6;
Totalfail = Totalfail + testReadFromFile7;
Totalfail = Totalfail + testReadFromFile8;
Totalfail = Totalfail + testReadFromFile9;
Totalfail = Totalfail + testReadFromFile10;
Totalfail = Totalfail + testReadFromFile11;
Totalfail = Totalfail + testReadFromFile12;
Totalfail = Totalfail + testReadFromFile13;
if (strcmp(isoctave(), '0'))
  Totalfail = Totalfail + testReadFlags;
end;
disp('Overall tests:');
disp(sprintf('Number tests: %d', test));
disp(sprintf('Number fails: %d', Totalfail));
disp(sprintf('Pass rate: %d%%\n', ((test-Totalfail)/test)*100));

if (Totalfail == 0)
    disp('MATLAB binding tests successful.');
end;
