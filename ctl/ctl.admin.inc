<?php

/**
 * ctl administration form.
 */
function ctl_admin_settings_form($form_state) {
  $form['tasks'] = array(
    '#type' => 'fieldset',
    '#title' => t('Available links'),
    '#description' => t('Activate the links you want to display in your toolbar'),
  );
  $local_tasks = menu_local_tasks();
  foreach ($local_tasks as $key => $local_task) {
    if ($key == 'root_path')
      continue;
    $form['tasks']['ctl_use_'.$key] = array(
      '#type' => 'checkbox',
      '#title' => ucfirst($key),
      '#default_value' => variable_get('ctl_use_'.$key, 0),
    );
  }
  return system_settings_form($form);
}
