deims-luquillo-custom
=====================

# DEIMS Luquillo LTER Customizations #

Repo name : deims-luquillo-custom
A module with customizations for the Luquillo LTER DEIMS instance.

The module Luquillo is used to ensure the Luquillo-specific customizations are
migrated to DEIMS D7.  In this module, there is code that extends the DEIMS D6 
migration templates. The code also expands the DEIMS core infrastructure, adding
content types and vocabularies to accomodate Luquillo LTER specific configurations.

Some data file structure nodes (data sources) that have no variables attached
in the source may trigger a fatal exception.

## Instructions ##

Clone 
* `git clone --branch 7.x-1.x git@github.com:lter/deims-luquillo-custom.git` 

Or download this module from: 

* `https://github.com/lter/deims-luquillo-custom/archive/7.x-1.x.zip`

Create a folder named "modules" under sites/default (unless you have already made it)

Under the sites/default/modules, create another folder named _luquillo_ 

Copy the contents of the cloned repo into the _luquillo_ folder you just made

Or, if you downloaded the repository (instead of using `git clone`) extract and copy the 
contents of the _zip_ file into the _luquillo_ folder we just created.

Using your browser visit your modules admin page, something like this URL 
`http://example.com/admin/modules`

In that page, find and enable the new _luquillo_ modules. Mark the checkbox to 
the side, and hit _Save_. 

If you prefer speed, use drush to enable the module(s). If you had, say, a GIS module..
* `drush en luquillo luquillo_spatial_data`

Some of this migrations required additions (organization type) and changes to the Luquillo 
DEIMS content types (data set). Ensure that those features changes are taking 
effect, by deleting the existing feature and placing the overriden feature, or simply 
moving the overriding DEIMS features (such as folder "deims-data-set") 
into the DEIMS features folder. If you are in your Drupal root:

* `mv sites/default/modules/luquillo/features/deims_data_set profiles/deims/modules/features`


###  For the custom migrations to work ###
This applies to the DEIMS D6 migration and customizations. You need 
to have a _settings.local.php_ file in the same place you have the _settings.php_ file.
(that is, _sites/default_).

The _settings.local.php_ file has a database connector to the DEIMS D6 database. Here is
an example

* `<?php `
* ` $databases['drupal6']['default'] = array(`
* `  'database' => 'deims-drupal6-luquillo',`
* `  'username' => 'deims-mysql-user',`
* `  'password' => 'deims-mysql-user-password',`
* `  'host' => 'localhost',`
* `  'port' => '',`
* `  'driver' => 'mysql',`
* `  'prefix' => '',`
* ` );`


###Other caveats:

-You will need to visit Structure->Blocks, and place the disabled "view: front-page-slideshow" in the header area of the Deims Theme.

-You may need to visit the core migrations at profiles/deims/modules/custom/deims-d6-migrate and modify the source vocabulary IDs for the core areas (vid=6) and LTER controlled (vid=8), in file luquillo.migrate.inc look for lines like
* `'source_vocabulary' => '6',`


For more documentation on this customizations visit the blogs at http://lno.lternet.edu/blog/6 
and look for DEIMS Migrations

For DEIMS help, visit the DEIMS project page at drupal.org, read the papers in databits.lternet.edu
or contact us.


