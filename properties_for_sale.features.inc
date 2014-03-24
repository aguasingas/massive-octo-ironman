<?php
/**
 * @file
 * properties_for_sale.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function properties_for_sale_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function properties_for_sale_image_default_styles() {
  $styles = array();

  // Exported image style: office_block.
  $styles['office_block'] = array(
    'name' => 'office_block',
    'label' => 'Office block',
    'effects' => array(
      26 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 255,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
