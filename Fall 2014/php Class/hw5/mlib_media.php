<!doctype html>
<?php
require('mlib_functions.php');
html_head("Add Media");
require('mlib_header.php');
require('mlib_sidebar.php');

# Code for your web page follows.
if (!isset($_POST['submit']))
    {
    ?>
    <h2>Add Media</h2>
    <form action="mlib_media.php" method="post">
      <table border="0">
        <tr bgcolor="#cccccc">
          <td width="100">Field</td>
          <td width="300">Value</td>
</tr> <tr>
          <td>Title</td>
<td align="left"><input type="text" name="title" size="35" maxlength="35"></td> </tr>
<tr>
<td>Author</td>
<td align="left"><input type="text" name="author" size="35" maxlength="35"></td>
</tr> <tr>
<td>Description</td>
<td align="left"><input type="text" name="description" size="65" maxlength="65"></td> </tr>
<td>Type</td>
<td align="left"><input type="text" name="type" size="35" maxlength="35"></td>
<tr>
<td colspan="2" align="right"><input type="submit" name="submit" value="Submit"></td>
        </tr>
      </table>
    </form>
    <?php
    } else {
     $title = $_POST['title'];
     $author = $_POST['author'];
     $type = $_POST['type'];
     $description = $_POST['description'];
     print "<h2>Media Added</h2>";
     print "<table border=1>";
     print "<tr>";
     print "<td>Title</td><td>Author</td><td>Description</td><td>Type</td>";
     print "</tr>";
     print "<tr>";
     print "<td>".$title."</td>";
     print "<td>".$author."</td>";
     print "<td>".$description."</td>";
     print "<td>".$type."</td>";
     print "</tr>";
     print "</table>";
}    
require('mlib_footer.php');
?>
