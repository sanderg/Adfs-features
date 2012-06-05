<?php
/**
 * @file
 * adfs_news_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function adfs_news_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: create news_item content.
  $permissions['create news_item content'] = array(
    'name' => 'create news_item content',
    'roles' => array(
      0 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any news_item content.
  $permissions['delete any news_item content'] = array(
    'name' => 'delete any news_item content',
    'roles' => array(
      0 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own news_item content.
  $permissions['delete own news_item content'] = array(
    'name' => 'delete own news_item content',
    'roles' => array(
      0 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any news_item content.
  $permissions['edit any news_item content'] = array(
    'name' => 'edit any news_item content',
    'roles' => array(
      0 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own news_item content.
  $permissions['edit own news_item content'] = array(
    'name' => 'edit own news_item content',
    'roles' => array(
      0 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
