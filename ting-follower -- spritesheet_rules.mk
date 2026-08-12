[1mdiff --git a/spritesheet_rules.mk b/spritesheet_rules.mk[m
[1mindex 636d11a51..1bd171235 100644[m
[1m--- a/spritesheet_rules.mk[m
[1m+++ b/spritesheet_rules.mk[m
[36m@@ -2,7 +2,6 @@[m [mOBJEVENTGFXDIR := graphics/object_events/pics[m
 FLDEFFGFXDIR := graphics/field_effects/pics[m
 PKMGFXDIR := graphics/object_events/pics/pokemon[m
 [m
[31m-[m
 $(OBJEVENTGFXDIR)/misc/cut_tree.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[36m@@ -384,1381 +383,428 @@[m [m$(OBJEVENTGFXDIR)/people/young_couple_m.4bpp: %.4bpp: %.png[m
 $(OBJEVENTGFXDIR)/people/youngster.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 4[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/chansey_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/chansey.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/clefairy_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/clefairy.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/cubone_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/cubone.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/deoxys_a_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/deoxys_a.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/deoxys_d_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/deoxys_d.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/deoxys_n_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/deoxys_n.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/doduo_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/doduo.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/fearow_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/fearow.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/ho_oh_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/ho_oh.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/jigglypuff_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/jigglypuff.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/kabuto_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/kabuto.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/kangaskhan_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/kangaskhan.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/lapras_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/lapras.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/lugia_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/lugia.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/machoke_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/machoke.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/machop_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/machop.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/meowth_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/meowth.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/nidoran_f_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/nidoran_f.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/nidoran_m_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/nidoran_m.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/nidorino_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/nidorino.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/omanyte_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/omanyte.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/pidgeot_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/pidgeot.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/pidgey_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/pidgey.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/pikachu_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/pikachu.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/poliwrath_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/poliwrath.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/psyduck_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/psyduck.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/seel_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/seel.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/slowbro_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/slowbro.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/slowpoke_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/slowpoke.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/spearow_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/spearow.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/voltorb_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/voltorb.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
 $(OBJEVENTGFXDIR)/people/whitney.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 4[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/wigglytuff_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/wigglytuff.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/Eevee_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/Eevee.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
[31m-$(OBJEVENTGFXDIR)/pokemon/Jolteon_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/Jolteon.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
[31m-$(OBJEVENTGFXDIR)/pokemon/Flareon_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/Flareon.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
[31m-$(OBJEVENTGFXDIR)/pokemon/Vaporeon_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/Vaporeon.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
[31m-$(OBJEVENTGFXDIR)/pokemon/Espeon_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/Espeon.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
[31m-$(OBJEVENTGFXDIR)/pokemon/Umbreon_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/Umbreon.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-$(OBJEVENTGFXDIR)/pokemon/Sudowoodo_tree.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 2 -mheight 4[m
[31m-$(OBJEVENTGFXDIR)/pokemon/Hex_Maniac_old.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/Sudowoodo.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 4[m
[31m-[m
[31m-[m
[31m-$(OBJEVENTGFXDIR)/misc/ball_poke.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(OBJEVENTGFXDIR)/pokemon/Hex_Maniac.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 2 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/substitute.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/bulbasaur.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/ivysaur.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/venusaur.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/charmander.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/charmeleon.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/charizard.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/squirtle.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/wartortle.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/blastoise.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/caterpie.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/metapod.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/butterfree.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/weedle.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/kakuna.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/beedrill.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/pidgey.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/pidgeotto.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/pidgeot.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/rattata.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/raticate.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/spearow.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/fearow.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/ekans.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/arbok.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/pikachu.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/raichu.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/sandshrew.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/sandslash.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/nidoran_f.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/nidorina.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/nidoqueen.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/nidoran_m.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/nidorino.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/nidoking.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/clefairy.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/clefable.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/vulpix.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/ninetales.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/jigglypuff.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/wigglytuff.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/zubat.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/golbat.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/oddish.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/gloom.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/vileplume.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/paras.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/parasect.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/venonat.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/venomoth.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/diglett.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/dugtrio.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/meowth.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/persian.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/psyduck.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/golduck.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/mankey.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/primeape.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/growlithe.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/arcanine.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/poliwag.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/poliwhirl.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/poliwrath.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/abra.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/kadabra.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/alakazam.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/machop.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/machoke.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/machamp.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/bellsprout.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/weepinbell.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/victreebel.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/tentacool.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/tentacruel.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/geodude.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/graveler.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/golem.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/ponyta.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/rapidash.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/slowpoke.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/slowbro.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/magnemite.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/magneton.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/farfetchd.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/doduo.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/dodrio.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/seel.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/dewgong.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/grimer.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/muk.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/shellder.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/cloyster.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/gastly.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/haunter.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/gengar.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/onix.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/drowzee.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/hypno.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/krabby.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/kingler.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/voltorb.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/electrode.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/exeggcute.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/exeggutor.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/cubone.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/marowak.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/hitmonlee.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/hitmonchan.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/lickitung.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/koffing.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/weezing.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/rhyhorn.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/rhydon.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/chansey.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/tangela.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/kangaskhan.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/horsea.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/seadra.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/goldeen.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/seaking.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/staryu.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/starmie.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/mr_mime.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/scyther.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/jynx.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/electabuzz.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/magmar.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/007_squirtle.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/pinsir.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/008_wartortle.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/tauros.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/009_blastoise.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/magikarp.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/031_nidoqueen.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/gyarados.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/034_nidoking.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/lapras.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/054_psyduck.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/ditto.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/055_golduck.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/eevee.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/060_poliwag.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/vaporeon.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/061_poliwhirl.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/jolteon.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/062_poliwrath.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/flareon.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/072_tentacool.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/porygon.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/073_tentacruel.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/omanyte.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/079_slowpoke.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/omastar.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/080_slowbro.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/kabuto.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/086_seel.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/kabutops.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/087_dewgong.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/aerodactyl.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/090_shellder.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/snorlax.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/091_cloyster.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/articuno.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/098_krabby.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/zapdos.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/099_kingler.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/moltres.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/108_lickitung.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/dratini.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/112_rhydon.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/dragonair.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/115_kangaskhan.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/dragonite.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/116_horsea.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/mewtwo.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/117_seadra.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/mew.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/118_goldeen.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/chikorita.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/119_seaking.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/bayleef.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/120_staryu.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/meganium.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/121_starmie.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/cyndaquil.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/128_tauros.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/quilava.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/130_gyarados.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/typhlosion.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/131_lapras.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/totodile.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/134_vaporeon.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/croconaw.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/138_omanyte.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/feraligatr.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/139_omastar.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/sentret.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/140_kabuto.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/furret.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/141_kabutops.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/hoothoot.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/143_snorlax.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/noctowl.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/147_dratini.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/ledyba.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/148_dragonair.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/ledian.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/149_dragonite.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/spinarak.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/151_mew.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/ariados.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/158_totodile.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/crobat.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/159_croconaw.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/chinchou.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/160_feraligatr.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/lanturn.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/161_sentret.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/pichu.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/162_furret.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/cleffa.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/170_chinchou.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/igglybuff.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/171_lanturn.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/togepi.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/183_marill.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/togetic.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/184_azumarill.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/natu.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/186_politoed.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/xatu.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/194_wooper.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/mareep.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/195_quagsire.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/flaaffy.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/199_slowking.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/ampharos.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/211_qwilfish.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/bellossom.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/215_sneasel.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/marill.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/222_corsola.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/azumarill.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/223_remoraid.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/sudowoodo.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/224_octillery.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/politoed.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/226_mantine.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/hoppip.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/230_kingdra.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/skiploom.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/241_miltank.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/jumpluff.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/245_suicune.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/aipom.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/248_tyranitar.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/sunkern.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/249_lugia.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/sunflora.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/258_mudkip.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/yanma.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/259_marshtomp.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/wooper.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/260_swampert.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/quagsire.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/263_zigzagoon.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/espeon.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/264_linoone.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/umbreon.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/270_lotad.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/murkrow.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/271_lombre.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/slowking.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/272_ludicolo.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/misdreavus.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/279_pelipper.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_a.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/295_exploud.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_b.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/296_makuhita.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_c.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/297_hariyama.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_d.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/298_azurill.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_e.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/306_aggron.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_f.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/318_carvanha.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_g.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/319_sharpedo.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_h.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/320_wailmer.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_i.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/321_wailord.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_j.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/339_barboach.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_k.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/340_whiscash.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_l.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/341_corphish.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_m.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/342_crawdaunt.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_n.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/349_feebas.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_o.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/350_milotic.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_p.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/363_spheal.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_q.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/364_sealeo.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_r.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/365_walrein.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_s.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/366_clamperl.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_t.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/367_huntail.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_u.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/368_gorebyss.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_v.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/369_relicanth.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_w.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/370_luvdisc.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_x.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/380_latias.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_y.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/381_latios.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_z.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/382_kyogre.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_exclamation.4bpp: %.4bpp: %.png[m
[32m+[m[32m$(PKMGFXDIR)/surfable/384_rayquaza.4bpp: %.4bpp: %.png[m
 	$(GFX) $< $@ -mwidth 4 -mheight 4[m
 [m
[31m-$(PKMGFXDIR)/follow/unown_question.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/wobbuffet.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/girafarig.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/pineco.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/forretress.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/dunsparce.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/gligar.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/steelix.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/snubbull.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/granbull.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/qwilfish.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/scizor.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/shuckle.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/heracross.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/sneasel.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/teddiursa.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/ursaring.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/slugma.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/magcargo.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/swinub.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/piloswine.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/corsola.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/remoraid.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/octillery.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/delibird.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/mantine.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/skarmory.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/houndour.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/houndoom.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/kingdra.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/phanpy.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/donphan.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/porygon2.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/stantler.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/smeargle.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/tyrogue.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/hitmontop.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/smoochum.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/elekid.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/magby.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/miltank.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/blissey.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/raikou.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/entei.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/suicune.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/larvitar.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/pupitar.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/tyranitar.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/lugia.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/ho_oh.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/celebi.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/treecko.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/grovyle.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/sceptile.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/torchic.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/combusken.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/blaziken.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/mudkip.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/marshtomp.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/swampert.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/poochyena.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/mightyena.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/zigzagoon.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/linoone.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/wurmple.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/silcoon.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/beautifly.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/cascoon.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/dustox.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/lotad.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/lombre.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/ludicolo.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/seedot.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/nuzleaf.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/shiftry.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/taillow.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/swellow.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/wingull.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/pelipper.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/ralts.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/kirlia.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/gardevoir.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/surskit.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/masquerain.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/shroomish.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/breloom.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/slakoth.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/vigoroth.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/slaking.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/nincada.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/ninjask.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/shedinja.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/whismur.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/loudred.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/exploud.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/makuhita.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/hariyama.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/azurill.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/nosepass.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/skitty.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/delcatty.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/sableye.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/mawile.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/aron.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/lairon.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/aggron.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/meditite.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/medicham.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/electrike.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/manectric.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/plusle.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/minun.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/volbeat.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/illumise.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/roselia.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/gulpin.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/swalot.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/carvanha.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/sharpedo.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/wailmer.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/wailord.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/numel.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/camerupt.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/torkoal.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/spoink.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/grumpig.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/spinda.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/trapinch.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/vibrava.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/flygon.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/cacnea.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/cacturne.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/swablu.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/altaria.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/zangoose.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/seviper.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/lunatone.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/solrock.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/barboach.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/whiscash.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/corphish.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/crawdaunt.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/baltoy.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/claydol.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/lileep.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/cradily.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/anorith.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/armaldo.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/feebas.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/milotic.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/castform.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/castform_sunny.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/castform_rainy.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/castform_snowy.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/kecleon.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/shuppet.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/banette.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/duskull.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/dusclops.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/tropius.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/chimecho.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/absol.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/wynaut.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/snorunt.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/glalie.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/spheal.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/sealeo.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/walrein.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/clamperl.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/huntail.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/gorebyss.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/relicanth.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/luvdisc.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/bagon.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/shelgon.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/salamence.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/beldum.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/metang.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/metagross.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/regirock.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/regice.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/registeel.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/latias.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/latios.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/kyogre.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/groudon.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/rayquaza.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/jirachi.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(PKMGFXDIR)/follow/deoxys.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 4 -mheight 4[m
[31m-[m
[31m-$(MISCGFXDIR)/emotes.4bpp: %.4bpp: %.png[m
[31m-	$(GFX) $< $@ -mwidth 2 -mheight 2[m
 [m
[31m-# All pokeballs are 16x32[m
[31m-$(OBJEVENTGFXDIR)/misc/ball_%.4bpp: $(OBJEVENTGFXDIR)/misc/ball_%.png ; $(GFX) $< $@ -mwidth 2 -mheight 4[m
