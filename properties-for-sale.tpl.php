<?php
/**
 * @file properties-for-sale.tpl.php
 *
 * Template for the block "Properties for sale".
 *
 * Variables available:
 *
 *   $visits: Number of total visits.
 *   $favorites: Number of favorites.
 *   $offers: Number of offers.
 *   $showings: Number of showings.
 *   $downloads: Number of downloads.
 *   $chart: Img tag with a chart for visits for the past week.
 *   $social: html with links to sharing services.
 *
 *
 */
?>
<div id="properties-for-sale-statistics">
  <?php
  if ($form) {
    ?>
    <div class="form">
      <?php print $form; ?>
    </div>
  <?php
  }
  if ($social) {
    ?>
    <div class="social">
      <?php print $social; ?>
    </div>
  <?php } ?>
  <div class="numbers">
    <div class="visits">
      <div class="value"><?php print $visits; ?></div>
      <div class="label"><?php print t('Visits'); ?></div>
    </div>
    <div class="downloads">
      <div class="value"><?php print $downloads; ?></div>
      <div class="label"><?php print t('Downloads'); ?></div>
    </div>
    <div class="favorites">
      <div class="value"><?php print $favorites; ?></div>
      <div class="label"><?php print t('Favourited'); ?></div>
    </div>
    <div class="offers">
      <div class="value"><?php print $offers; ?></div>
      <div class="label"><?php print t('Offers made'); ?></div>
    </div>
    <div class="showings">
      <div class="value"><?php print $showings; ?></div>
      <div class="label"><?php print t('Showings requested'); ?></div>
    </div>
  </div>
  <div class="chart">
    <?php print $chart; ?>
  </div>
</div>