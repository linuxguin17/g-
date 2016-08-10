<html>
<body>
<form action="chart.php" method="post">
<input type="text" name="foo" placeholder="foo">
<br>
<input type="text" name="foo1" placeholder="foo1">
<br>
<input type="text" name="foo2" placeholder="foo2">
<br>
<input type="text" name="foo3" placeholder="foo3">
<br>
<input type="text" name="foo4" placeholder="foo4">
<br>
<input type="text" name="foo5" placeholder="foo5">
<br>
<input type="text" name="foo6" placeholder="foo6">
<br>
<input type="text" name="foo7" placeholder="foo7">
<br>
<button>Press and Submit</button>
</form>
<br>
</body>
</html>
<?php
$foo1 = $_POST["foo"];
$foo2 = $_POST["foo1"];
$foo3   = $_POST["foo2"];
$foo4 = $_POST["foo3"];
$foo5 = $_POST["foo4"];
$foo6 = $_POST["foo5"];
$foo7  = $_POST["foo6"];
$chart  = "<table style=width:100%>
  <tr>
    <th>foo</th>
    <th>foo1</th>
    <th>foo2</th>
    <th>foo3</th>
    <th>foo4</th>
    <th>foo5</th>
    <th>foo6</th>
  </tr>
  <tr>
    <td>$foo1</td>
    <td>$foo2</td>
    <td>$foo3</td>
    <td>$foo4</td>
    <td>$foo5</td>
    <td>$foo6</td>
  </tr>
</table> ";
echo($chart);
?>
