<?php
/**
 * @file
 * adfs_news_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function adfs_news_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_item|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_item';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|news_item|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function adfs_news_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_item|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_item';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_news_tumbnail',
        1 => 'title',
        2 => 'post_date',
        3 => 'body',
        4 => 'field_attachement',
      ),
    ),
    'fields' => array(
      'field_news_tumbnail' => 'ds_content',
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'body' => 'ds_content',
      'field_attachement' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|news_item|teaser'] = $ds_layout;

  return $export;
}
