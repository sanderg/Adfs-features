<?php
/**
 * @file
 * adfs_news_feature.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function adfs_news_feature_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'uuid' => 'd82311c5-94ef-49f4-ed21-a7547a1ebbf2',
    'name' => 'General',
    'weight' => '0',
    'vocabulary' => 'news_category',
  );
  return $terms;
}
