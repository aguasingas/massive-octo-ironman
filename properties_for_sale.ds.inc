<?php
/**
 * @file
 * properties_for_sale.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function properties_for_sale_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|office|office_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'office';
  $ds_fieldsetting->view_mode = 'office_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|office|office_block'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function properties_for_sale_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|office|office_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'office';
  $ds_layout->view_mode = 'office_block';
  $ds_layout->layout = 'ds_1col_wrapper';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_office_billede',
        1 => 'title',
        2 => 'field_office_adresse',
        3 => 'field_office_phone',
        4 => 'field_office_fax',
        5 => 'field_office_email',
      ),
    ),
    'fields' => array(
      'field_office_billede' => 'ds_content',
      'title' => 'ds_content',
      'field_office_adresse' => 'ds_content',
      'field_office_phone' => 'ds_content',
      'field_office_fax' => 'ds_content',
      'field_office_email' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|office|office_block'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function properties_for_sale_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'office_block';
  $ds_view_mode->label = 'Office block';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['office_block'] = $ds_view_mode;

  return $export;
}
