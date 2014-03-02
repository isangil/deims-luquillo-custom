<?php
/**
 * @file
 * deims_research_site.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function deims_research_site_taxonomy_default_vocabularies() {
  return array(
    'program' => array(
      'name' => 'Program',
      'machine_name' => 'program',
      'description' => 'Use tags to groups content according to Program Vocabulary',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
