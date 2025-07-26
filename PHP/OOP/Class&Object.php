<?php
class Fruit {
  // Properties
  public $name;
  public $color;

  // Methods
  function set_name($name) {
    $this->name = $name;
  }
  function get_name() {
    return $this->name;
  }
}
$Mango = new Fruit("Mango","Red");
$Pineapple = new Fruit("Pineapple","Yellow");
$Mango->set_name('Mango');
$Pineapple->set_name('Pineapple');

echo $Mango->get_name();
echo "<br>";
echo $Pineapple->get_name();
?>