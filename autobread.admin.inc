<?php

/**
 * Autobread Settings form.
 */
function autobread_settings_form($form, &$form_state) {
  $form['autobread_excluded_paths'] = array(
    '#type' => 'textarea',
    '#title' => t('Excluded paths'),
    '#default_value' => variable_get('autobread_excluded_paths', "[front]\nsearch/*"),
    '#description' => t('Enter a list of path that will not be affected by Autobread. You can use "*" as wildcard. [front] is front page'),
    '#rows' => 5
  );
  $form['autobread_set_frontpage'] = array(
    '#type' => 'checkbox',
    '#title' => t('Set frontpage link'),
    '#default_value' => variable_get('autobread_set_frontpage', TRUE),
    '#description' => t('If checked, Autobread will set the frontpage link.'),
  );

  $form['autobread_set_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Set page title'),
    '#default_value' => variable_get('autobread_set_title', FALSE),
    '#description' => t('If checked, Autobread will set the current page title if does not exists.'),
  );

  $form['autobread_delimiter'] = array(
    '#type' => 'textfield',
    '#title' => t('Delimiter'),
    '#default_value' => variable_get('autobread_delimiter', '»'),
    '#size' => 3,
    '#description' => t('Symbol that separates breadcrumbs.'),
  );

  return system_settings_form($form);
}
