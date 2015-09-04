<?php
/**
 * @file
 * webfact_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function webfact_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_api|node|website|form';
  $field_group->group_name = 'group_api';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'website';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'API',
    'weight' => '10',
    'children' => array(
      0 => 'field_public',
      1 => 'field_site_owner_uid',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_api|node|website|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resources|node|website|form';
  $field_group->group_name = 'group_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'website';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '8',
    'children' => array(
      0 => 'field_memory',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-resources field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_resources|node|website|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_template|node|website|form';
  $field_group->group_name = 'group_template';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'website';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '9',
    'children' => array(
      0 => 'field_docker_environment',
      1 => 'field_docker_volumes',
      2 => 'field_docker_image',
      3 => 'field_docker_ports',
      4 => 'field_not_drupal',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_template|node|website|form'] = $field_group;

  return $export;
}
